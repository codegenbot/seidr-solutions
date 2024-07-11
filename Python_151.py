```
def double_the_difference():
    lst = input("Enter the list of integers: ").split()
    try:
        result = sum(int(i) ** 2 for i in lst if int(i) >= 0 and int(i) % 2 != 0)
        return str(result)
    except ValueError:
        return "Error! Invalid input."