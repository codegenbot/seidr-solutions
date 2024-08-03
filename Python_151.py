def check(lst, output):
    if isinstance(output, (int, float)):
        print(f"The difference between the largest and smallest elements in {lst} is: {output}")
    else:
        print("The function did not return a number.")