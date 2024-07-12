```
def file_name_check(file_name):
    if len([char for char in file_name if char.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.')[0].lstrip().lower()[0] < 'a' or file_name.split('.')[1].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'