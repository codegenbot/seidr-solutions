```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name_parts = file_name.rsplit('.', 1)
    if not name_parts[0][0].isalpha():
        return 'No'
    if name_parts[1].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'