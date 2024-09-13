# SEIDR solutions

This repository contains solutions to PSB-2 and HumanEval benchmarks written fully with the use of [Synthesize Execute Instruct Debug Rank](https://github.com/vadim0x60/seidr) framework. See papers Liventsev et.al. "[Fully Autonomous Programming with Large Language Models](https://dl.acm.org/doi/10.1145/3583131.3590481)" and Grishina et.al. "Fully Autonomous Programming using Iterative Multi-Agent Debugging with Large Language Models" for more information.

## Experimental matrix

Included experiments span:
* 2 datasets: [PSB-2](https://zenodo.org/records/5084812) and [HumanEval](https://github.com/openai/human-eval)
* 2 primary models: [llama3](https://ai.meta.com/blog/meta-llama-3/) and [gpt-3.5-turbo](https://platform.openai.com/docs/models/gpt-3-5-turbo) and a few experiments with other models.
* Different tree arity settings, i.e. number of drafts per prompt, explanations per program and repairs per explanation.
* 2 parent selection methods: tournament selection and lexicase selection

## How to explore this repository

Every experiment has 2 corresponding branches in this repository that can be accessed via a command like

```
git checkout {humaneval|psb2}_{model_name}_{drafts_per_prompt}x{explanations_per_program}x{repairs_per_explanation}{_lexicase}
```

for the master branch, and

```
git checkout {humaneval|psb2}_{model_name}_{drafts_per_prompt}x{explanations_per_program}x{repairs_per_explanation}{_lexicase}_dev
```

for the development branch.

During the experiment, SEIDR commited every program it generated in the search process to the development branch. If this program received higher test scores than all programs before it, it was commited to the master branch as well.
Hence, one can explore the evolution of solution candidates by exploring the history of the corresponding branch, for example, with the `git log` command.
