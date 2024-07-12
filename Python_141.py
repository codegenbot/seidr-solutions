```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    parts = file_name.split('.')
    if not parts[0][0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if parts[-1] not in allowed_extensions:
        return 'No'
    return 'Yes'