```
numbers = []
while True:
    temp_input = input("Enter numbers (comma-separated): ").strip()
    if temp_input:
        numbers = [float(x.strip().replace(",", ".")) for x in temp_input.split(",")]
        break

threshold = float(input("Enter threshold: "))

def has_close_elements(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if float(numbers[i]) - float(numbers[i + 1]) <= threshold:
            return True
    return False

print(has_close_elements(numbers, threshold))