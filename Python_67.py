s = input("Enter a string: ")
num_apples = (int("".join(filter(str.isdigit, s)).lstrip("0") or 0) if "".join(filter(str.isdigit, s)) else 0)