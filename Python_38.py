try:
    input_list = list(map(int, input("Enter space-separated integers: ").strip().split()))
    even_sum = sum(num for num in input_list if num % 2 == 0)
    print(even_sum)
except ValueError:
    print("Invalid input. Please enter space-separated integers.")