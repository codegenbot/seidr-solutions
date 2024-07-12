```
def check_sum(x: str, y: str):
    try:
        x = int(x)
        y = int(y)
        if type(x) is not int or type(y) is not int:
            return "Error: Please enter valid integers"
        elif x + y <= 10:
            return f"The sum of {x} and {y} is {x+y}. The result is less than or equal to 10."
        else:
            return f"The sum of {x} and {y} is {x+y}. The result is greater than 10."
    except ValueError:
        return "Error: Please enter valid integers"