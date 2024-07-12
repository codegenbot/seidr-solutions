```
def decode_cyclic():
    s = input("Enter a string: ")
    while True:
        n = input(
            "Enter 1 for linear decoding and any other number for cyclic decoding: "
        )
        if n.isdigit() and (n == "1" or int(n) > 0):
            break
        else:
            print("Invalid input. Please enter either 1 or a number greater than 0.")

    if n == "1":
        print(s)
    else:
        result = [s[0], s[1]]
        for char in s[2:]:
            if len(result) % 3 == 1:
                result.append(char)
            elif len(result) % 3 == 2:
                result.append(char)
        while len(result) < len(s):
            result.append(result[len(result)-1])
        print("".join(result))


decode_cyclic()