elif char.isdigit():
    num = int(char)
    result += str((num + 3) % 10) if (num + 3) % 10 else '7' if (num // 10) % 8 else '8'