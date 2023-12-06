def file_name_check(file_name):
    count = 0
    for char in file_name:
        if char.isdigit():
            count += 1
        if count > 3:
            return 'No'
    if '.' not in file_name or len(file_name) < 5:
        return 'No'
    ext = file_name.split('.')[-1]
    if ext not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'