def intersperse_numbers() -> list:
    numbers = input("Enter space separated integers: ")
    numbers = [int(num) for num in numbers.split()]
    delimeter = int(input("Enter the delimeter: "))
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter])
        result.extend([numbers[i]])
    return result