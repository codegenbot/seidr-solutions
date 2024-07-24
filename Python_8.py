print("Enter a list of numbers separated by space: ")
numbers = [int(num) for num in input().split()]
if not all(isinstance(i, int) for i in numbers):
    print("List elements must be integers")
elif len(set(numbers)) != len(numbers):
    print("All elements must be unique.")
else:
    sum_input = float(input("Enter the sum you want: "))
    product_input = float(input("Enter the product you want: "))
    try:
        result = [sum(sum_product(*numbers)), math.prod(*numbers)] 
        if (result[0] != sum_input) or (math.prod(*map(int, numbers)) != product_input):
            raise ValueError(f"Sum: {sum_input}, Product: {product_input} not found.")
        print(f"Sum: {result[0]}, Product: {result[1]}")
    except ValueError as e:
        print(e)