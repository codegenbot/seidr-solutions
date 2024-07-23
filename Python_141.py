```
def file_name_check(file_name):
    if '.' in file_name:
        part1, part2 = file_name.split('.')
        if len(part1) > 0 and part1[0].isalpha() and part1.count('0') <= 3 and part1.count('1') <= 3 and part1.count('2') <= 3 and part1.count('3') <= 3 and part1.count('4') <= 3 and part1.count('5') <= 3 and part1.count('6') <= 3 and part1.count('7') <= 3 and part1.count('8') <= 3 and part1.count('9') <= 3:
            if part2 in ['txt', 'exe', 'dll']:
                return 'Yes'
        else:
            return 'No'
    else:
        return 'No'