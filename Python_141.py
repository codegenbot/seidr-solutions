def file_name_check(file_name):
    if len(file_name.split('.')[0]) == 0 or not file_name.split('.')[0][0].isalpha():
        return 'No'
    if len(file_name.split('.')[1]) != 3 or file_name.split('.')[1] not in ['txt', 'exe', 'dll']:
        return 'No'
    digit_count = sum([1 for char in file_name if char.isdigit()])
    if digit_count > 3:
        return 'No'
    return 'Yes'