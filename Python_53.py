def add(a, b):
    return a + b

try:
    while True:
        try:
            line = input("Enter two integers separated by space: ").strip()
            if line == '':
                break
            x, y = map(int, line.split())
            if len(line.split()) != 2:
                print("Please enter exactly two integers separated by a space.")
                continue
            result = add(x, y)
            print(result)

        except ValueError:
            print("Please enter valid integers.")
except (EOFError, KeyboardInterrupt):
    print("Exiting the program.")