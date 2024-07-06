def double_the_difference(lst1):
    result = double_the_difference([*lst1])
    print(f"The calculated value is {result}.") if abs(result) == lst1 else print("No match.")