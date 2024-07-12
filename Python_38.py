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
        shift = int(input("Enter the shift value: "))
        result = []
        for char in s:
            result.append(char[(len(s) + shift - 1) % len(s)])
            shift = (shift - 1) % len(s)
        print("".join(result))


decode_cyclic()