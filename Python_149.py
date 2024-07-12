def secure_code():
    digits = input("Enter the digits separated by spaces: ")
    unique_digits = set(int(x) for x in digits.split())
    sorted_unique_digits = str(sorted(unique_digits)).replace(', ', ' ')
    if sum(unique_digits) % 2 == 0:
        return " ".join(map(str, sorted(unique_digits))) + f" Sum: {sum(unique_digits)} - EVEN"
    else:
        return " ".join(map(str, sorted(unique_digits))) + f" Sum: {sum(unique_digits)} - ODD"