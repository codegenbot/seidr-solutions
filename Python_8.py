try:
    numbers = list(map(int, input("Enter space-separated integers: ").split()))
except ValueError:
    print("Invalid input. Please provide valid integers separated by spaces.")
    exit()

print(sum_product(numbers))