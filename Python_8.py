def calculate_statistics():
    numbers = []
    while True:
        num = input("Enter a number (or 'stop' to finish): ")
        if num.lower() == "stop":
            break
        try:
            numbers.append(int(num))
        except ValueError:
            print("Invalid input. Please enter an integer or 'stop'.")

    if not numbers:
        return "No numbers entered."

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    average = total_sum / len(numbers) if len(numbers) > 0 else 0
    result = f"Sum: {total_sum}, Product: {product}, Average: {average}"

    return result