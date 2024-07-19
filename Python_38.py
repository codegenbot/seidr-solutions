try:
    numbers = list(map(int, input().strip().split()))
    even_sum = sum(num for num in numbers if num % 2 == 0)
    print(even_sum)

except ValueError:
    print("Invalid input. Please enter space-separated integers only.")