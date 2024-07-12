def check(s):
    if int(s) % 2 == 0:
        return "EVEN"
    else:
        return "ODD"

def secure_code():
    digits = input("Enter the digits separated by spaces: ")
    unique_digits = set(int(x) for x in digits.split())
    sorted_unique_digits = str(sorted(unique_digits)).replace(', ', ' ')
    sorted_list_sum = sum(unique_digits)
    is_even = sorted_list_sum % 2 == 0
    check_result = check(str(sorted_list_sum))
    return " ".join(map(str, unique_digits)) + f" Sum: {sorted_list_sum} - {check_result}"