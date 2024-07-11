def sum_squares():
    n = int(input("Enter number of elements: "))
    lst = []
    for i in range(n):
        element = float(input(f"Enter element {i+1}: "))
        lst.append(element)
    return sum(
        [
            (
                i**2
                if i % 3 == 0 and i % 4 != 0
                else i**3 if i % 4 == 0 and i % 3 != 0 else 0
            )
            for i in lst
        ]
    )