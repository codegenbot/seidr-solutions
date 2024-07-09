def sum_squares(lst):
    if not all(1 <= i <= 10 for i in lst):
        return "Error: List must contain only numbers between 1 and 10."
    return sum(i**2 if i % 4 == 0 or i % 12 == 0 else i for i in lst)