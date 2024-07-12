def add(x: int, y: int) -> int:
    result = input("Enter two numbers: ")

    try:
        x = int(result.split()[0])
        y = int(result.split()[1])
        return x + y
    except ValueError:
        return "Error: Please enter valid integers"