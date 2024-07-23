```
def file_name_check(file_name):
    if '.' not in file_name or len(file_name.split('.')) != 2:
        return 'No'
    name, extension = file_name.rsplit('.', 1)
    if not name.isalpha():
        return 'No'
    for c in name:
        if c.isdigit() and name.count(c) > 3:
            return 'No'
    if extension.lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'