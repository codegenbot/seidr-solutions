# Find the sum and product of a list of integers that is given by user.


def sum_product():
    numbers = input("Enter your numbers separated by space: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid inputs. Please enter only integers.")
        return

    total, product = sum_product(numbers)

    print(f"The sum of the numbers is {total} and their product is {product}.")