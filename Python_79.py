
def decimal_to_binary(decimal):
    """You will be given a number in decimal form and your task is to convert it to
    binary format. The function should return a string, with each character representing a binary
    number. Each character in the string will be '0' or '1'.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.


    # Hint: You can use the bin() function which returns a string.
    # You can remove the "0b" part of the string by slicing.
    # To add the "db" characters to the beginning and end of the string,
    # you can use the "+" operator.
    #
    # bin(15) returns "0b1111"
    # bin(15)[2:] returns "1111"
    # "db" + bin(15)[2:] + "db" returns "db1111db"

    return "db" + bin(decimal)[2:] + "db"


print(decimal_to_binary(15))
print(decimal_to_binary(32))
    Examples:
    decimal_to_binary(15)   # returns "db1111db"
    decimal_to_binary(32)   # returns "db100000db"
    """
