numbers = []
for _ in range(5):
    while True:
        try:
            num = int(input())
            numbers.append(num)
            break
        except ValueError:
            print("Please enter a valid integer.")

print(sum(numbers))