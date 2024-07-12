```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    parts = file_name.split('.')
    if len(parts) != 2:
        return 'No'
    if not (parts[0][0].isalpha() and parts[0]):
        return 'No'
    exts = ['txt', 'exe', 'dll']
    if parts[1] not in exts:
        return 'No'
    return 'Yes'