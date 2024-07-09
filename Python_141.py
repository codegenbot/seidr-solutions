```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.').index('.') != 1:
        return 'No'
    first, second = file_name.split('.')
    if not first[0].isalpha():
        return 'No'
    if second not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'