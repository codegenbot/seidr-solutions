try:
    input_list = list(map(int, input().rstrip().strip().split()))
    even_sum = sum(num for num in input_list if num % 2 == 0)
    print(even_sum)
except ValueError:
    print("Invalid input. Please enter space-separated integers.")