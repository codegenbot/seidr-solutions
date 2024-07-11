def decode_cyclic():
    while True:
        try:
            i = int(input("Enter the number of iterations (positive integer): "))
            if i <= 0:
                print("Number of iterations must be a positive integer. Try again!")
            else:
                s = input("Enter the cyclic string: ")
                result = ""
                if len(s) <= 1:
                    return s
                while i > 0:
                    if i == 1:
                        group = s[i-1] + ''.join([s[0], next(reversed(s))[0]]) + s[i-1]
                    else:
                        group = s[(i-1)%len(s)] + ''.join([s[(i-2)%len(s)], next(reversed(s[(i-1)%len(s)]))]) + s[(i-1)%len(s)]
                    if i > 1:
                        result += group[-1] + group[1:-1][::-1] + group[0]
                    else:
                        result = group
                    i = (i-1)
                return result
        except ValueError:
            print("Invalid input. Please enter a number.")