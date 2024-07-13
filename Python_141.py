```
def file_name_check(file_name):
    if '.' not in file_name:
        return 'No'
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    if not parts[0][0].isalpha():
        return 'No'
    for c in parts[0]:
        if c.isdigit() and c not in ['1', '2', '3']:
            return 'No'
    if parts[1] not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'