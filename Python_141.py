def file_name_check(file_name):
    if sum(char.isdigit() for char in file_name) > 3:
        return 'No'
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    if not parts[0] or not parts[0][0].isalpha():
        return 'No'
    if parts[1] not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'