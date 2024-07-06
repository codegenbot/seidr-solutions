def decimal_to_binary(decimal):
    binary = bin(decimal).replace("0b", "")
    return "db" + ("1" if len(binary) % 2 != 0 else "0") + binary + "db"