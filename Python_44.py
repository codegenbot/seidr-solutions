

def change_base(x: int, base: int):
    """Change numerical base of input number x to base.
    return string representation after the conversion.
    base numbers are less than 10.
    >>> change_base(8, 3)
    '22'
    >>> change_base(8, 2)
    '1000'
    >>> change_base(7, 2)
    '111'

    # Complete the following code.
    # You should use the built-in function int() and bin().
    # You can check the type of the input by using type(x)
    # and the type of the output by using type(output).
    output = int(x) + base

    return output
    """
