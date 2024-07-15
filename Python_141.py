```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    dot_count = file_name.count('.')
    if dot_count != 1:
        return 'No'
    if not file_name[:file_name.index('.')).isalpha():
        return 'No'
    if file_name[dot_count+1:].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'