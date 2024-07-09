```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name:
        return 'No'
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    if not parts[0].isalpha():
        return 'No'
    ext = parts[1].lower()
    if ext not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'