```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    parts = file_name.split('.')
    if len(parts[0]) == 0 or not parts[0][0].isalpha():
        return 'No'
    extension = parts[-1]
    if extension not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'