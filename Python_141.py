def file_name_check(file_name):
    count = 0
    for char in file_name:
        if char.isdigit():
            count += 1
            if count > 3:
                return 'No'
    if '.' not in file_name or len(file_name.split('.')) != 2:
        return 'No'
    if file_name.startswith('.') or file_name.endswith('.'):
        return 'No'
    extension = file_name.split('.')[1]
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'