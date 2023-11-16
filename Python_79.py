
def decimal_to_binary(decimal):
    """You will be given a number in decimal form and your task is to convert it to
    binary format. The function should return a string, with each character representing a binary
    number. Each character in the string will be '0' or '1'.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.


    binary_string = 'db'
    while decimal > 0:
        binary_string += str(decimal % 2)
        decimal = decimal // 2
    binary_string += 'db'
    return binary_string[::-1]


def binary_to_decimal(binary):
    """You will be given a string containing a binary number. Your task is to convert it to
    decimal format. The function should return an integer.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.

    Examples:
    binary_to_decimal("db1111db")   # returns 15
    binary_to_decimal("db100000db") # returns 32
    """

    decimal = 0
    binary = binary[2:-2]
    for i in range(len(binary)):
        decimal += int(binary[i]) * pow(2, len(binary) - i - 1)
    return decimal


def hexadecimal_to_decimal(hexadecimal):
    """You will be given a string containing a hexadecimal number. Your task is to convert it to
    decimal format. The function should return an integer.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.

    Examples:
    hexadecimal_to_decimal("db1db")   # returns 1
    hexadecimal_to_decimal("db1fdb")  # returns 31
    hexadecimal_to_decimal("dbffdb")  # returns 255
    """

    hexadecimal_to_decimal_dict = {
        '0': 0,
        '1': 1,
        '2': 2,
        '3': 3,
        '4': 4,
        '5': 5,
        '6': 6,
        '7': 7,
        '8': 8,
        '9': 9,
        'a': 10,
        'b': 11,
        'c': 12,
        'd': 13,
        'e': 14,
        'f': 15
    }

    decimal = 0
    hexadecimal = hexadecimal[2:-2]
    for i in range(len(hexadecimal)):
        decimal += hexadecimal_to_decimal_dict[hexadecimal[i]] * pow(16, len(hexadecimal) - i - 1)
    return decimal


def decimal_to_hexadecimal(decimal):
    """You will be given a number in decimal form and your task is to convert it to
    hexadecimal format. The function should return a string, with each character representing a
    hexadecimal number. Each character in the string will be between '0' and 'f'.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.

    Examples:
    decimal_to_hexadecimal(1)   # returns "db1db"
    decimal_to_hexadecimal(31)  # returns "db1fdb"
    decimal_to_hexadecimal(255) # returns "dbffdb"
    """

    decimal_to_hexadecimal_dict = {
        0: '0',
        1: '1',
        2: '2',
        3: '3',
        4: '4',
        5: '5',
        6: '6',
        7: '7',
        8: '8',
        9: '9',
        10: 'a',
        11: 'b',
        12: 'c',
        13: 'd',
        14: 'e',
        15: 'f'
    }

    hexadecimal = 'db'
    while decimal > 0:
        hexadecimal += decimal_to_hexadecimal_dict[decimal % 16]
        decimal = decimal // 16
    hexadecimal += 'db'
    return hexadecimal[::-1]


def hexadecimal_to_binary(hexadecimal):
    """You will be given a string containing a hexadecimal number. Your task is to convert it to
    binary format. The function should return a string, with each character representing a binary
    number. Each character in the string will be '0' or '1'.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.

    Examples:
    hexadecimal_to_binary("db1db")   # returns "db0001db"
    hexadecimal_to_binary("db1fdb")  # returns "db00011111db"
    hexadecimal_to_binary("dbffdb")  # returns "db11111111db"
    """

    return decimal_to_binary(hexadecimal_to_decimal(hexadecimal))


def binary_to_hexadecimal(binary):
    """You will be given a string containing a binary number. Your task is to convert it to
    hexadecimal format. The function should return a string, with each character representing a
    hexadecimal number. Each character in the string will be between '0' and 'f'.

    There will be an extra couple of characters 'db' at the beginning and at the end of the string.
    The extra characters are there to help with the format.

    Examples:
    binary_to_hexadecimal("db0001db")   # returns "db1db"
    binary_to_hexadecimal("db00011111db")  # returns "db1fdb"
    binary_to_hexadecimal("db11111111db")  # returns "dbffdb"
    """

    return decimal_to_hexadecimal(binary_to_decimal(binary))
    Examples:
    decimal_to_binary(15)   # returns "db1111db"
    decimal_to_binary(32)   # returns "db100000db"
    """
