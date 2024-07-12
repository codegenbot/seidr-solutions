```
def sum_squares(lst):
    total = 0
    for item in lst:
        if isinstance(item, (int, float)):
            if isinstance(item, int) and (item % 3 == 0 and item % 4 != 0):
                total += item ** 2
            elif isinstance(item, int) and (item % 4 == 0 and item % 3 != 0):
                total += item ** 3
        else:
            if item.lower() == 'odd':
                if isinstance(int(item.split(' ')[1]), int) and (int(item.split(' ')[1]) % 3 == 0 and int(item.split(' ')[1]) % 4 != 0):
                    total += int(item.split(' ')[1]) ** 2
                elif isinstance(int(item.split(' ')[1]), int) and (int(item.split(' ')[1]) % 4 == 0 and int(item.split(' ")[1]) % 3 != 0):
                    total += int(item.split(' ')[1]) ** 3
            else:
                if item.lower() == 'even':
                    if isinstance(int(item.split(' ')[1]), int) and (int(item.split(' ')[1]) % 3 == 0 and int(item.split(' ')[1]) % 4 != 0):
                        total += int(item.split(' ')[1]) ** 2
                    elif isinstance(int(item.split(' ')[1]), int) and (int(item.split(' ')[1]) % 4 == 0 and int(item.split(' ')[1]) % 3 != 0):
                        total += int(item.split(' ')[1]) ** 3
        return total