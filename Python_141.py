```
def file_name_check(file_name):
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    name, extension = parts
    if not name[0].isalpha():
        return 'No'
    if sum(c.isdigit() for c in name) > 3:
        return 'No'
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'