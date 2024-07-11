```
def file_name_check(file_name):
    if '.' not in file_name or len(file_name.split('.')) != 2:
        return 'No'
    name, extension = file_name.rsplit('.', 1)
    if not name[0].isalpha() or any(c.isdigit() for c in name):
        return 'No'
    if len([c for c in name if c.isdigit()]) > 3:
        return 'No'
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'