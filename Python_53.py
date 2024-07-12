```
def add_and_multiply(x: int, y: int):
    try:
        if type(x) != int or type(y) != int:
            return "Error: Please enter valid integers"
        else:
            sum = x + y
            product = x * y
            return f"The sum is {sum} and the product is {product}"
    except TypeError:
        return "Error: Please enter valid integers"