def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    if "oranges" in s:
        number_of_apples = int(s.split()[0].replace("apples ", ""))
        return n - (number_of_apples + 1)
    else:
        return n - int(''.join([i for i in s if i.isdigit() or i == 'and'])) - 1