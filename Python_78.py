```Python
def hex_key(num):
    count = 0
    for char in num:
        if char.isdigit():
            if int(char) in [2, 3, 5, 7]:
                count += 1
        elif char.upper() in ['B', 'D', 'F']:
            count += 1
    return count