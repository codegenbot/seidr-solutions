def add_elements():
    n = int(input("Enter number of elements: "))
    arr = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    k = int(input("Enter the value to split array: "))

    sum_of_positive_and_negative_integers = sum(x for x in arr[:k] if 10 > abs(x) >= 1)

    print(
        f"The sum of all positive and negative integers less than or equal to 10 from the first {k} elements is: {sum_of_positive_and_negative_integers}."
    )