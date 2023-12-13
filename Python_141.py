def file_name_check(file_name):
    if len(file_name.split('.')) != 2:
        return 'No'
    name, extension = file_name.split('.')
    if len(extension) != 3 or extension not in ['txt', 'exe', 'dll']:
        return 'No'
    if len(name) == 0 or not name[0].isalpha():
        return 'No'
    digit_count = sum(1 for char in name if char.isdigit())
    if digit_count > 3:
        return 'No'
    return 'Yes'