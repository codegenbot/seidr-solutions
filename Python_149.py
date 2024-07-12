def secure_code():
    digits = input("Enter the digits separated by spaces: ")
    unique_digits = set(int(x) for x in digits.split())
    sorted_unique_digits = str(sorted(unique_digits)).replace(', ', ' ')
    sorted_list_sum = sum(unique_digits)
    def check(sum):
        if sum % 2 == 0:
            return " ".join(map(str, sorted(unique_digits))) + f" Sum: {sum} - EVEN"
        else:
            return " ".join(map(str, sorted(unique_digits))) + f" Sum: {sum} - ODD"
    return check(sorted_list_sum)