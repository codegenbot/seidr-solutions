def intersperse(delimiter: str) -> None:
    numbers_input = input("Enter the list of numbers (space-separated): ")
    while True:
        try:
            numbers = [int(i) for i in numbers_input.split()]
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")
            numbers_input = input("Enter the list of numbers (space-separated): ")

    output = [str(x) + delimiter for x in numbers]
    if len(output) > 1 and output[0] == delimiter:
        output.pop(0)
    elif len(output) > 1 and output[-1] == delimiter:
        output.pop()
    print(delimiter.join(map(str, numbers)))